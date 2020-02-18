

// "Grid" is a wxGrid
// "Frame::OnGridKeyDown" is an event handler associated with Grid situated in Frame



void Frame::OnGridKeyDown(wxKeyEvent& event)
{
    switch ( event.GetKeyCode() )
    {
        case WXK_PAGEDOWN:
            if (Grid->GetGridCursorRow()==(Grid->GetRows()-1)) Grid->AppendRows();
            event.Skip();
            break;
        case WXK_PAGEUP:
            if (Grid->GetGridCursorRow()==(Grid->GetRows()-1)) { Grid->MoveCursorUp(false); Grid->DeleteRows(Grid->GetRows()-1); }
            else event.Skip();
            break;
        default:
            event.Skip();
            break;
    }
}