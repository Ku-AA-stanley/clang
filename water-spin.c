#include <Windows.h> // 包含 Windows API 標頭檔
#include <stdio.h>

int main()
{
  printf("看完了嗎，我要開轉了");

  while (1)
  {
    if (GetKeyState(VK_XBUTTON1) < 0) // 檢查滑鼠側鍵是否按下，VK_XBUTTON1代表滑鼠的第一個側鍵
    {
      mouse_event(MOUSEEVENTF_MOVE, 800, 0, 0, 0); // 移動滑鼠
    }
    Sleep(1); // 休眠1毫秒，避免無限迴圈過於耗費CPU資源
  }

  return 0;
}