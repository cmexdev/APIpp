//CODE CREATED BY OWEN MAGILL
//PLEASE RESPECT THE EFFORT PUT INTO THIS CODE

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//declare all wariables
string newApiOp;
string fileType;
bool javascriptFile;
string repoSearchType;
string singleRepoOwner;
string singleRepoName;
string singleUrl;
string repoName;
string repoFullName;
string repoDesc;
string repoHtmlUrl;
string fileName = "newApi++File";
string filePath = "C:\\code\\api++";
string fullFilePath;
string fullFilePathConfirm;
string fileIdValue = "apiresultsapi++";
string fileTitleLink;
string fileTitleLinkCustom = "#";
string fileTitleClassName;
string fileFullNameClassName;
string fileDescClassName;
string listLinkExist;
bool startup = true;
string prefsName;
string prefsColon;
string prefsValue;
string listFilter;
string listUrl;
string listInNameKeyword;
string apiSysType;
string discordClassName;
string uninstallLoc = "unins000.exe";
string mainCommand;
string confirmUnis;

//main application. responsible for main tasks
int main() {
    //start API++
    int prefs();
    if (startup == true) {
        return prefs();
        startup = false;
    }
    cout << "API++ starting..." << endl;
    cout << "Reading prefs file..." << endl;
    //warn the user
    cout << "NOTE: THIS IS A STABLE RELEASE BUT INCOMPLETE AND INCONSISTENT." << endl;
    system("title API++");
    int apiSys();
    cout << "API++ ready..." << endl;
    cin >> mainCommand;
    if (mainCommand == "newapiop") {
        cout << "Embed the code directly into a HTML file or put it in a JavaScript file? [H (HTML)/J (JavaScript)] ";
        cin >> fileType;
        if (fileType == "h" || fileType == "H") {
            cout << "api++ will embed the code into a HTML file." << endl;
            javascriptFile = false;
            return apiSys();
        }
        else if (fileType == "j" || fileType == "J") {
            cout << "api++ will put the code into a .js file." << endl;
            javascriptFile = true;
            return apiSys();
        }
    }
    else if (mainCommand == "help") {
        cout << "Need help? Visit the documentation! (https://piccolowen.github.io/code/apipp/documentation/intro.html)" << endl;
    }
    else {
        cout << "Whoops! Not a command! Hint: type 'newapiop' to create a new API system!" << endl;
    }
    return 0;
}

//THIS CODE WILL BE CHANGED SINCE THERE WILL BE MORE SUPPORTED APIS IN THE FUTURE
//get the type of API sys
int apiSys() {
    int githubapisys();
    int discordapisys();
    system("cls");
    //fetch type of embed
    cout << "What API system will you be making? [G (GitHub)/D (Dicord)]" << endl;
    cin >> apiSysType;
    if (apiSysType == "g" || apiSysType == "G") {
        return githubapisys();
    }
    else if (apiSysType == "d" || apiSysType == "D") {
        return discordapisys();
    }
}

int discordapisys() {
    int discordstatusapisys();
    cout << "API++ only works with Discord's status API." << endl;
    return discordstatusapisys();
}

int githubapisys() {
    int fileSys();
    cout << "For your own reference the base URL is https://api.github.com/" << endl;
    cout << "Choose whether you would like to embed a single repository or a list (found using filters). [R (single repo)/L (list of repos) ";
    cin >> repoSearchType;
    system("cls");
    if (repoSearchType == "R" || repoSearchType == "r") {
        cout << "Please type the owner of the repository you are trying to embed: ";
        cin >> singleRepoOwner;
        system("cls");
        cout << "Please type the name of the repository you are trying to embed: ";
        cin >> singleRepoName;
        system("cls");
        singleUrl = "https://api.github.com/repos/" + singleRepoOwner + "/" + singleRepoName;
        cout << "This is the URL api++ will be using: " << singleUrl << endl;
        cout << "Here is the repo HTML URL (the URL a user would go to view the repo.)" << endl;
        repoHtmlUrl = "https://github.com/" + singleRepoOwner + "/" + singleRepoName;
        cout << repoHtmlUrl << endl;
        system("pause");
        system("cls");

        cout << "api++ needs to know what parts of the repo you will want to be displayed." << endl;
        cout << "Include title? [Y/N] ";
        cin >> repoName;
        system("cls");
        cout << "Include the full name? [Y/N] ";
        cin >> repoFullName;
        system("cls");
        cout << "Include the description? [Y/N] ";
        cin >> repoDesc;
        system("cls");
        return fileSys();
    }
    else if (repoSearchType == "l" || "L") {
        cout << "There are many ways to get a list of repositories. With GitHub you have to search with a filter." << endl;
        cout << "To get a full list of filters, go to https://help.github.com/en/github/searching-for-information-on-github/searching-for-repositories" << endl;
        cout << "Do you already have a search API URL? [Y/N] ";
        cin >> listLinkExist;
        system("cls");
        if (listLinkExist == "y" || listLinkExist == "Y") {
            cout << "Great that will make this a lot easier!" << endl;
        }
        else if (listLinkExist == "n" || listLinkExist == "N") {
            cout << "Type the filter you want to use." << endl;
            cout << "Filter by in the name [inname] \
            \nFilter by in the description [indesc] \
            \nFilter by in the README [inreadme] \
            \nFilter by user's name [username] \
            \nFilter by organization [orgname] \
            \nFilter by size (MB size.) [exactsize (filter by repos with exact size) / (there are other options that are not built in to API++ yet)] \
            \nFilter by number of followers [follown / (there are other options that are not built in to API++ yet)] \
            \nFilter by number of forks [forksn / (there are other options that are not built in to API++ yet)] \
            \nFilter by number of stars [starsn / (there are other options that are not built in to API++ yet)] \
            \nFilter by date created [datec] \
            \nFilter by date pushed [datep] \
            \nFilter by language [lang] \
            \nFilter by topic [topic] \
            \nFilter by number of topics [topicsn] \
            \nFilter by license keyword [license] \
            \nFilter by public or private [pubpri] \
            \nFilter by whether a repo is a mirror or not [mirror] \
            \nFilter by whether a repo has been archived or not [arch] \
            " << endl;
            cin >> listFilter;
            system("cls");
            return fileSys();
        }
        else {
            cout << "Whoops! Not one of your options! (API++ is still going to say you don't have a link) ERRORCODE=0x0" << endl;
            return fileSys();
        }
    }
    else {
        cout << "Not one of your options ERRORCODE=0x0" << endl;
        system("cls");
        return apiSys();
    }
}

//get file info
int fileSys() {
    int singleFile();
    int listFile();
    ofstream file;
        if (javascriptFile == true) {
            cout << "What should the JavaScript file be named? (no spaces) ";
            cin >> fileName;
            system("cls");
        }
        else if (javascriptFile == false) {
            cout << "What should the HTML file be named? (no spaces) ";
            cin >> fileName;
            system("cls");
        }
        cout << "Where should the file be placed? (no spaces) ";
        cin >> filePath;
        system("cls");
        if (javascriptFile == true) {
            fullFilePath = filePath + "\\\\" + fileName + ".js";
        }
        else if (javascriptFile == false) {
            fullFilePath = filePath + "\\\\" + fileName + ".html";
        }
        cout << "Is this good? [Y/N]" << endl;
        cout << fullFilePath << endl;
        cin >> fullFilePathConfirm;
        system("cls");
        //confirm that user is satisfied with full file path
        if (fullFilePathConfirm == "Y" || fullFilePathConfirm == "y") {
            if (repoSearchType == "r" || repoSearchType == "R") {
                return singleFile();
            }
            else if (repoSearchType == "l" || repoSearchType == "L") {
                return listFile();
            }
        }
        else if (fullFilePathConfirm == "n" || fullFilePathConfirm == "N") {
            return fileSys();
        }
        //return back to filesys if user is not satisfied
        else {
            cout << "Not one of your options! ERRORCODE=0" << endl;
            return fileSys();
        }
}

//create single repo file for github
int singleFile() {
    system(("title API++ - New file: "+ fullFilePath).c_str());
            ofstream file((fullFilePath).c_str());
            if (javascriptFile == false) {
                file << "<!DOCTYPE html>" << endl;
                file << "<html>" << endl;
                file << "<head>" << endl;
                file << "<title>API++ auto generated file</title>" << endl;
                file << "</head>" << endl;
                file << "<body>" << endl;
                file << "<script>" << endl;
            }
            file << "//JavaScript code generated by API++" << endl;
            file << "//API++ by Piccolowen" << endl;
            file << "window.onload = apifunc();" << endl;
            file << "async function apifunc() {" << endl;
            if (repoSearchType == "R" || repoSearchType == "r") {
                file << "const url = '" << singleUrl << "';" << endl;
            }
            file << "const response = await fetch(url);" << endl;
            file << "const result = await response.json();" << endl;

            cout << "For this code to work the code needs to place the results in a HTML element with a certain ID value. What should that value be? (no spaces) ";
            cin >> fileIdValue;
            system("cls");
            cout << "ID value: " << fileIdValue << endl;
            system("cls");

            file << "const apiresult = document.getElementById('" << fileIdValue << "');" << endl;
            file << "console.log('api++ system working...')" << endl;
            file << "console.log('api++ system by Piccolowen https://github.com/Piccolowen')" << endl;
            file << "console.log('api++ result:');" << endl;
            file << "console.log(result);" << endl;

            //repo title
            if (repoName == "Y" || repoName == "y") {
                file << "console.log('name result: ' + result.name)" << endl;
                cout << "Should the title element have link? [C (custom link)/R (repo link)/N (no)] ";
                cin >> fileTitleLink;
                system("cls");
                if (fileTitleLink == "R" || fileTitleLink == "r") {
                    file << "const title = document.createElement('a')" << endl;
                    file << "title.href = result.html_url" << endl;
                }
                else if (fileTitleLink == "C" || fileTitleLink == "c") {
                    cout << "Custom URL: ";
                    cin >> fileTitleLinkCustom;
                    system("cls");
                    file << "const title = document.createElement('a')" << endl;
                    file << "title.href = '" << fileTitleLinkCustom << "'" << endl;
                }
                else {
                    file << "const title = document.createElement('p')" << endl;
                }
                file << "title.target = '_blank'" << endl;
                cout << "What should the class value be for the title? (the class name allows styling with CSS) [no spaces] ";
                cin >> fileTitleClassName;
                system("cls");
                cout << "Class name: " << fileTitleClassName << endl;
                system("cls");
                file << "title.className = '" << fileTitleClassName << "'" << endl;
                file << "title.textContent = result.name" << endl;
                file << "apiresult.appendChild(title)" << endl;
            }
            //repo fullname
            if (repoFullName == "Y" || repoFullName == "y") {
                file << "console.log('full name result: ' + result.full_name)" << endl;
                file << "const fullname = document.createElement('p')" << endl;
                cout << "What should the class value be for the full name? (the class name allows styling with CSS) [no spaces] ";
                cin >> fileFullNameClassName;
                system("cls");
                cout << "Class name: " << fileFullNameClassName << endl;
                system("cls");
                file << "fullname.className = '" << fileFullNameClassName << "'" << endl;
                file << "fullname.textContent = result.full_name" << endl;
                file << "apiresult.appendChild(fullname)" << endl;
            }
            //repo desc
            if (repoDesc == "Y" || repoDesc == "y") {
                file << "console.log('desc result: ' + result.description)" << endl;
                file << "const desc = document.createElement('p')" << endl;
                cout << "What should the class value be for the description? (the class name allows styling with CSS) [no spaces] ";
                cin >> fileDescClassName;
                system("cls");
                cout << "Class name: " << fileDescClassName << endl;
                system("cls");
                file << "desc.className = '" << fileDescClassName << "'" << endl;
                file << "desc.textContent = result.description" << endl;
                file << "apiresult.appendChild(desc)" << endl;
            }
            file << "}" << endl;

            //finish html file (if applicable)
            if (javascriptFile == false) {
                file << "</script>" << endl;
                file << "</body>" << endl;
                file << "</html>" << endl;
                cout << "Make sure to add an element with ID value: " << fileIdValue << "!" << endl;
            }
}

//create url for list system for github
int listFile() {
    int listInNameFile();
    system(("title API++ - New file: "+ fullFilePath).c_str());
    if (listFilter == "inname") {
        cout << "Please type the keyword you are searching for: ";
        cin >> listInNameKeyword;
        listUrl = "https://api.github.com/search/repositories?q=" + listInNameKeyword + "+in:name";
        cout << "Here is the API URL :" << listUrl << endl;
        return listInNameFile();
    }
    else {
        cout << "Not one of your options! ERRORCODE=0x0" << endl;
    }
}

//creates file for list api sys
int listInNameFile() {
    system(("title API++ - New file: "+ fullFilePath).c_str());
    ofstream file((fullFilePath).c_str());
    if (javascriptFile == false) {
        file << "<!DOCTYPE html>" << endl;
        file << "<html>" << endl;
        file << "<head>" << endl;
        file << "<title>API++ auto generated file</title>" << endl;
        file << "</head>" << endl;
        file << "<body>" << endl;
        file << "<script>" << endl;
    }
    file << "//JavaScript code generated by API++" << endl;
    file << "//API++ by Piccolowen" << endl;
    file << "window.onload = apifunc()" << endl;
    file << "async function apifunc() {" << endl;
    file << "const url = '" << listUrl << "'" << endl;
    file << "const response = await fetch(url)" << endl;
    file << "const result = await response.json()" << endl;

    cout << "For this code to work the code needs to place the results in a HTML element with a certain ID value. What should that value be? (no spaces) ";
    cin >> fileIdValue;
    system("cls");

    file << "const apiresult = document.getElementById('" << fileIdValue << "')" << endl;
    file << "console.log('API++ system working...')" << endl;
    file << "console.log('API++ system by Piccolowen https://github.com/Piccolowen')" << endl;
    file << "console.log('API++ result:')" << endl;
    file << "console.log(result)" << endl;
    file << "const resultLength = Object.keys(result.items).length" << endl;
    file << "var arrnum = 0" << endl;
    file << "while (arrnum < resultLength) {" << endl;

    //gather info
    cout << "Include the title? [Y/N] ";
    cin >> repoName;
    cout << "Include the full name? (ex: Piccolowen/APIpp) [Y/N] ";
    cin >> repoFullName;
    cout << "Include the description? [Y/N] ";
    cin >> repoDesc;

    if (repoName == "Y" || repoName == "y") {
        cout << "Do you want a URL for the title element? [C (custom URL)/R (repo URL)/N (no)] " << endl;
        cin >> fileTitleLink;
        if (fileTitleLink == "c" || fileTitleLink == "C") {
            cout << "Please type custom URL: ";
            cin >> fileTitleLinkCustom;
            file << "const title = document.createElement('a')" << endl;
            file << "title.href = '" << fileTitleLinkCustom << "'" << endl;
            file << "title.target = '_blank'" << endl;
        }
        else if (fileTitleLink == "r" || fileTitleLink == "R") {
            file << "const title = document.createElement('a')" << endl;
            file << "title.href = result.items[arrnum].html_url" << endl;
            file << "title.target = '_blank'" << endl;
        }
        else {
            file << "const title = document.createElement('p')" << endl;
        }
        cout << "What should the class name for the title be? (This will allow for styling with CSS) ";
        cin >> fileTitleClassName;
        file << "title.className = '" << fileTitleClassName << "'" << endl;
        file << "title.textContent = result.items[arrnum].name" << endl;
    }

    if (repoFullName == "y" || repoFullName == "Y") {
        file << "const fullname = document.createElement('p')" << endl;
        cout << "What should the class name for the full name be? (the full name will look like this: USERNAME/REPOSITORY) ";
        cin >> fileFullNameClassName;
        file << "fullname.className = '" << fileFullNameClassName << "'" << endl;
        file << "fullname.textContent = result.items[arrnum].full_name" << endl;
    }

    if (repoDesc == "y" || repoDesc == "Y") {
        file << "const desc = document.createElement('p')" << endl;
        cout << "What should the class name for the description be? ";
        cin >> fileDescClassName;
        file << "desc.className = '" << fileDescClassName << "'" << endl;
        file << "desc.textContent = result.items[arrnum].description" << endl;
    }

    file << "}" << endl;
    file << "}" << endl;
    if (javascriptFile == false) {
        file << "</script>" << endl;
        file << "</body>" << endl;
        file << "</html>" << endl;
    }
}

int discordstatusapisys() {
    /*

                var sp = new StatusPage.page({ page: 'srhpyqt94yxb' });
                sp.summary({
                    success: function (data) {
                        console.log(data.components[0].status);
                        if (data.components[0].status = 'operational') {
                            var sum = '<h3 class="discord-status-sum-good">Discord is <b>' + data.components[0].status + '</b>!</h3>';
                            var elsum = document.getElementById('discord-status-summary');
                            elsum.innerHTML = sum;
                        }
                        else {
                            var sum = '<h3 class="discord-status-sum-else">Discord is <b>' + data.components[0].status + '</b>!</h3>';
                            var elsum = document.getElementById('discord-status-summary');
                            elsum.innerHTML = sum;
                        }
                        var msg = '<p>discord status summary: <b>' + data.components[0].status + '</b></p>';
                        var el = document.getElementById('discord-status-components');
                        el.innerHTML = msg;
                    }
                });
                var sp = new StatusPage.page({ page: 'srhpyqt94yxb' });
                sp.status({
                    success: function (data) {
                        console.log(data.status.indicator);
                        var msg = '<p>discord status: <b>' + data.status.indicator + '</b></p>';
                        var el = document.getElementById('discord-status-indicator');
                        el.innerHTML = msg;
                    }
                });
            */
    cout << "This API allows you to get the status of Discord." << endl;
    cout << "What should the class name be for the element? (this allows for styling with CSS) ";
    cin >> discordClassName;
    ofstream file((fullFilePath).c_str());
    file << "//Dicord's code: https://cdn.statuspage.io/se-v2.js" << endl;
    file << "StatusPage='undefined'==typeof StatusPage?{}:StatusPage,StatusPage.page=function(e){if(e=e||{},!e.page)throw new Error('A pageId is required to initialize.');this.apiKey=e.apiKey||null,this.error=e.error||this.error,this.format=e.format||'json',this.pageId=e.page,this.version=e.version||'v2',this.secure=!('secure'in e)||e.secure,this.protocol=this.secure?'https':'http',this.host=e.host||'statuspage.io',this.host_with_port_and_protocol=e.test?'':this.protocol+'://'+this.pageId+'.'+this.host},StatusPage.page.prototype.serialize=function(e,t){var s=[],r={sms:'email_sms',webhook:'endpoint'};for(var o in e)if('to_sentence'!==o){var i=o;o=o in r?r[o]:o;var a=t?t+'['+o+']':o,n=e[i];s.push('object'==typeof n?this.serialize(n,a):encodeURIComponent(a)+'='+encodeURIComponent(n))}return s.join('&')},StatusPage.page.prototype.createStatusPageCORSRequest=function(e,t){var s=new XMLHttpRequest;return'withCredentials'in s?s.open(e,t,!0):'undefined'!=typeof XDomainRequest?(s=new XDomainRequest,s.open(e,t)):s=null,s},StatusPage.page.prototype.executeRequestAndCallbackWithResponse=function(e){if(!e.path)throw new Error('A path is required to make a request');var t=e.path,s=e.method||'GET',r=e.success||null,o=e.error||this.error,i=this.host_with_port_and_protocol+'/api/'+this.version+'/'+t+'.'+this.format,a=this.createStatusPageCORSRequest(s,i);if(a)if(this.apiKey&&(console.log('!!! API KEY IN USE - REMOVE BEFORE DEPLOYING TO PRODUCTION !!!'),console.log('!!! API KEY IN USE - REMOVE BEFORE DEPLOYING TO PRODUCTION !!!'),console.log('!!! API KEY IN USE - REMOVE BEFORE DEPLOYING TO PRODUCTION !!!'),a.setRequestHeader('Authorization','OAuth '+this.apiKey)),a.onload=function(){var e=JSON.parse(a.responseText);r&&r(e)},a.error=o,'POST'===s||'DELETE'===s){var n=e.data||{};a.setRequestHeader('Content-type','application/x-www-form-urlencoded'),a.send(this.serialize(n))}else a.send()},StatusPage.page.prototype.get=function(e,t){if(t=t||{},!e)throw new Error('Path is required.');if(!t.success)throw new Error('Success Callback is required.');var s=t.success||{},r=t.error||{};this.executeRequestAndCallbackWithResponse({path:e,success:s,error:r,method:'GET'})},StatusPage.page.prototype.post=function(e,t){if(t=t||{},!e)throw new Error('Path is required.');var s={};if('subscribers'===e){if(!t.subscriber)throw new Error('Subscriber is required to post.');s.subscriber=t.subscriber}else{if(!t.data)throw new Error('Data is required to post.');s=t.data}var r=t.success||{},o=t.error||{};this.executeRequestAndCallbackWithResponse({data:s,path:e,success:r,error:o,method:'POST'})},StatusPage.page.prototype['delete']=function(e,t){if(t=t||{},!e)throw new Error('Path is required.');if(!t.subscriber)throw new Error('Data is required to delete.');var s={};'subscribers'===e?s.subscriber=t.subscriber:s=t.data;var r=t.success||{},o=t.error||{};this.executeRequestAndCallbackWithResponse({data:s,path:e,success:r,error:o,method:'DELETE'})},StatusPage.page.prototype.error=function(){console.log('There was an error with your request')},StatusPage.page.prototype.summary=function(e){this.get('summary',e)},StatusPage.page.prototype.status=function(e){this.get('status',e)},StatusPage.page.prototype.components=function(e){this.get('components',e)},StatusPage.page.prototype.incidents=function(e){switch(e.filter){case'unresolved':this.get('incidents/unresolved',e);break;case'resolved':this.get('incidents/resolved',e);break;default:this.get('incidents',e)}},StatusPage.page.prototype.scheduled_maintenances=function(e){switch(e.filter){case'active':this.get('scheduled-maintenances/active',e);break;case'upcoming':this.get('scheduled-maintenances/upcoming',e);break;default:this.get('scheduled-maintenances',e)}},StatusPage.page.prototype.subscribe=function(e){if(!e||!e.subscriber)throw new Error('A subscriber object is required.');this.post('subscribers',e)},StatusPage.page.prototype.unsubscribe=function(e){if(!e||!e.subscriber)throw new Error('A subscriber object is required.');if(!e.subscriber.id)throw new Error('You must supply a subscriber.id in order to cancel a subscription.');this['delete']('subscribers',e)};" << endl;
    file << "var sp = new StatusPage.page({ page: 'srhpyqt94yxb' });" << endl;
    file << "sp.summary({" << endl;
    file << "success: function (data) {" << endl;
    file << "console.log('API++ Discord Status API system: ' + data.components[0].status);" << endl;
    file << "const statussum = document.createElement('p')" << endl;
    file << "statussum.className = '" << discordClassName << "'" << endl;
    file << "statussum.textContent = data.components[0].status" << endl;
    file << "}})" << endl;
}

//responsible for setting prefs (only runs on startup and on command)
int prefs() {
    //read prefs
    ifstream prefs;
    prefs.open("pref.pref");

    if (prefs.is_open()) {
        while (prefs >> prefsName >> prefsColon >> prefsValue) {
            if (prefsColon == ":") {
                if (prefsName == "theme") {
                    if (prefsValue == "dark") {
                        system("color 07");
                    }
                    else if (prefsValue == "light") {
                        system("color 70");
                    }
                    else {
                        system(("color" + prefsValue).c_str());
                    }
                }
                else {
                    cout << "Unknown pref..." << endl;
                }
            }
        }
        prefs.close();
    }
    else {
        cout << "Prefs file is not open. ERRORCODE=0x1" << endl;
    }
    startup = false;
    return main();
}
