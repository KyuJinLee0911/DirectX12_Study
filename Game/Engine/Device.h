#pragma once

// gpu�� �ְ�޴� ����
class Device
{
public:


private:

	ComPtr<ID3D12Debug>		_debugController;
	ComPtr<IDXGIFactory>	_dxgi; // ȭ�� ���� ��ɵ�
	ComPtr<ID3D12Device>	_device; // ���� ��ü ����


};

