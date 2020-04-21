const { app, BrowserWindow } = require('electron')
var fs = require('fs')

function createWindow() {
    // Create the browser window.
    const win = new BrowserWindow({
        width: 800,
        height: 600,
        minHeight: 600,
        minWidth: 800,
        fullscreenable: true,
        hasShadow: true,
        titleBarStyle: "customButtonsOnHover",
        frame: false,
        webPreferences: {
            nodeIntegration: true
        }
    })

    // and load the index.html of the app.
    win.loadFile('startup.html')

    // Open the DevTools.
    //win.webContents.openDevTools()
}

// This method will be called when Electron has finished
// initialization and is ready to create browser windows.
// Some APIs can only be used after this event occurs.
app.whenReady().then(createWindow)

// Quit when all windows are closed.
app.on('window-all-closed', () => {
    // On macOS it is common for applications and their menu bar
    // to stay active until the user quits explicitly with Cmd + Q
    if (process.platform !== 'darwin') {
        app.quit()
    }
})

app.on('activate', () => {
    // On macOS it's common to re-create a window in the app when the
    // dock icon is clicked and there are no other windows open.
    if (BrowserWindow.getAllWindows().length === 0) {
        createWindow()
    }
})

'use strict';

/* eslint-disable no-console */
const path = require('path');
const url = require('url');
const DiscordRPC = require('discord-rpc');

// don't change the client id if you want this example to work
const clientId = '636636361608134656';

// only needed for discord allowing spectate, join, ask to join
DiscordRPC.register(clientId);

const rpc = new DiscordRPC.Client({ transport: 'ipc' });
const startTimestamp = new Date();

async function setActivity() {
    if (!rpc || !mainWindow) {
        return;
    }

    const boops = await mainWindow.webContents.executeJavaScript('window.boops');

    rpc.setActivity({
        details: `booped ${boops} times`,
        state: 'in slither party',
        startTimestamp,
        largeImageKey: 'snek_large',
        largeImageText: 'tea is delicious',
        smallImageKey: 'snek_small',
        smallImageText: 'i am my own pillows',
        instance: false,
    });
}

rpc.on('ready', () => {
    setActivity();

    // activity can only be set every 15 seconds
    setInterval(() => {
        setActivity();
    }, 15e3);
});

rpc.login({ clientId }).catch(console.error);

// In this file you can include the rest of your app's specific main process
// code. You can also put them in separate files and require them here.

function welcomeExit() {
    window.close()
}

function min() {
    mainWindow.minimize()
}