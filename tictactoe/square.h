#ifndef SQUARE_H
#define SQUARE_H

#include <QObject>

class Square : public QObject
{
    Q_OBJECT
    Q_ENUMS(SelectionType)
    Q_PROPERTY(SelectionType selection READ getSelection NOTIFY selectionChanged)
public:
    enum SelectionType
    {
        Empty,
        Player1,
        Player2
    };
    explicit Square(QObject* parent = 0);

    SelectionType getSelection() const;
    void setSelection(const SelectionType& selection);

signals:
    void selectionChanged();

public slots:

private:
    SelectionType m_selection;
};

#endif  // SQUARE_H
