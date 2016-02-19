import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Window 2.2
import QtQuick.Dialogs 1.2
import TestData 1.0
ApplicationWindow {
    title: qsTr("Hello World")
    width: 640
    height: 480
    visible: true

    DataControl{
        id : tData ;
    }

Rectangle{

}
    menuBar: MenuBar {
        Menu {
            title: qsTr("&File")
            MenuItem {
                text: qsTr("&Open")
                onTriggered: messageDialog.show(qsTr("Open action triggered"));
            }
            MenuItem {
                text: qsTr("E&xit")
                onTriggered: Qt.quit();
            }
        }
    }

    MessageDialog {
        id: messageDialog
        title: qsTr("May I have your attention, please?")

        function show(caption) {
           var obj =tData.getData();


            //[1]
            for(var p in obj)
            {
                var pe = obj[p].toString().split(',');
                console.log("name:"+pe[0]+"sex:"+pe[1]+"\n");
            }

            //[2]
            var p = obj[1].toString().split(',');
            console.log("name:"+p[0]+"sex:"+p[1]+"\n") ;


            messageDialog.text = caption;
            messageDialog.open();
        }
    }
}
