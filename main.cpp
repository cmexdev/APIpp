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
string listLinkExist;
bool startup = true;
string prefsName;
string prefsColon;
string prefsValue;

int main() {
    //start API++
    int prefs();
    if (startup == true) {
        return prefs();
        startup = false;
    }
    cout << "API++ starting..." << endl;
    cout << "Reading prefs file..." << endl;
    system("title API++");
    int apiSys();
    cout << "Start new api operation? [Y/N] ";
    cin >> newApiOp;
    system("cls");
    if (newApiOp == "y" || newApiOp == "Y") {
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
    else {
        cout << "Exiting..." << endl;
        system("pause");
        return 0;
    }
    return 0;
}
int apiSys() {
    int fileSys();
    system("cls");
    //fetch type of embed
    cout << "This application currently only supports GitHub's API system." << endl;
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
            return fileSys();
        }
        else {
            cout << "Whoops! Not one of your options! (API++ is still going to say you don't have a link)" << endl;
            return fileSys();
        }
    }
    else {
        cout << "Not one of your options" << endl;
        system("cls");
        return apiSys();
    }
}
int fileSys() {
    int singleFile();
    int listFile();
    ofstream file;
    //get file info
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
        //return back to filesys if user is not satisfied
        else {
            return fileSys();
        }
}
int singleFile() {
    system(("title API++ - New file: "+ fullFilePath).c_str());
            ofstream file((fullFilePath).c_str());
            if (javascriptFile == false) {
                file << "<!DOCTYPE html>" << endl;
                file << "<html>" << endl;
                file << "<head>" << endl;
                file << "<title>api++ auto generated file</title>" << endl;
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
                cin >> fileFullNameClassName;
                system("cls");
                cout << "Class name: " << fileFullNameClassName << endl;
                system("cls");
                file << "desc.className = '" << fileFullNameClassName << "'" << endl;
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
int listFile() {
    system(("title API++ - New file: "+ fullFilePath).c_str());
    cout << "This part of the program is not here yet." << endl;
    system("pause");
    return 0;
}
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
        cout << "Prefs file is not open." << endl;
    }
    startup = false;
    return main();
}
