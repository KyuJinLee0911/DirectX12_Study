#pragma once

// gpu와 주고받는 역할
class Device
{
public:


private:

	ComPtr<ID3D12Debug>		_debugController;
	ComPtr<IDXGIFactory>	_dxgi; // 화면 관련 기능들
	ComPtr<ID3D12Device>	_device; // 각종 객체 생성


};

