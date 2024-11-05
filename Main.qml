import QtQuick
import containmentmask

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    ItemA {
        anchors.fill: parent
        Rectangle {
            anchors.fill: parent
            id: rectangle
            color: hvr.hovered ? "blue" : "red"
            HoverHandler {
                id: hvr
            }
            TapHandler {
                onTapped: rectangle.visible = false
            }
        }
    }
}
