######################################################################
# Communi
######################################################################

TEMPLATE = subdirs
!no_qml {
    greaterThan(QT_MAJOR_VERSION, 4):qtHaveModule(qml):SUBDIRS += qml2
    else:!lessThan(QT_MAJOR_VERSION, 4):!lessThan(QT_MINOR_VERSION, 7):SUBDIRS += qml1
} else {
    message(QML disabled)
}
