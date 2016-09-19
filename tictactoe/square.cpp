#include "square.h"

Square::Square(QObject* parent)
    : QObject(parent)
    , m_selection(SelectionType::Empty)
{
}

Square::SelectionType Square::getSelection() const
{
    return m_selection;
}

void Square::setSelection(const SelectionType& selection)
{
    m_selection = selection;
    emit selectionChanged();
}
