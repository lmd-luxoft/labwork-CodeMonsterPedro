import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 1200
    height: 1000
    visible: true
    title: qsTr("Hello World")
    Text {
        id: test_label
        text: qsTr("" + field.count)
    }
    GridView{
            id: field
            width: 480
            height: 480
            model: controller.myModel
            cellHeight: 45
            cellWidth: 45
            delegate: fieldItem
    }
    Component{
        id: fieldItem
        Rectangle{
            width: 40
            height: 40
            color: "gray"
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    if (mText == 0){
                        parent.color = "blue"
                    } else {
                        parent.color = "red"
                    }
                }
            }
        }
    }

}
