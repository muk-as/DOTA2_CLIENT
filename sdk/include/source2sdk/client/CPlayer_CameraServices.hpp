#pragma once
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/client/C_fogplayerparams_t.hpp"
#include "source2sdk/client/audioparams_t.hpp"
#include "source2sdk/client/fogparams_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    class C_ColorCorrection;
};

namespace source2sdk::client
{
    class C_FogController;
};

namespace source2sdk::client
{
    class C_PostProcessingVolume;
};

namespace source2sdk::client
{
    class C_TonemapController2;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "fogplayerparams_t m_PlayerFog"
    // static metadata: MNetworkVarNames "CHandle< CColorCorrection> m_hColorCorrectionCtrl"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hViewEntity"
    // static metadata: MNetworkVarNames "CHandle< CTonemapController2> m_hTonemapController"
    // static metadata: MNetworkVarNames "audioparams_t m_audio"
    // static metadata: MNetworkVarNames "CHandle<C_PostProcessingVolume> m_PostProcessingVolumes"
    #pragma pack(push, 1)
    class CPlayer_CameraServices : public client::CPlayerPawnComponent
    {
    public:
        // metadata: MNetworkEnable
        client::C_fogplayerparams_t m_PlayerFog; // 0x40        
        // metadata: MNetworkEnable
        // m_hColorCorrectionCtrl has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_ColorCorrection> m_hColorCorrectionCtrl;
        char m_hColorCorrectionCtrl[0x4]; // 0x80        
        // metadata: MNetworkEnable
        // m_hViewEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hViewEntity;
        char m_hViewEntity[0x4]; // 0x84        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        // m_hTonemapController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_TonemapController2> m_hTonemapController;
        char m_hTonemapController[0x4]; // 0x88        
        [[maybe_unused]] std::uint8_t pad_0x8c[0x4]; // 0x8c
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        client::audioparams_t m_audio; // 0x90        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        // m_PostProcessingVolumes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_PostProcessingVolume>> m_PostProcessingVolumes;
        char m_PostProcessingVolumes[0x18]; // 0x108        
        float m_flOldPlayerZ; // 0x120        
        float m_flOldPlayerViewOffsetZ; // 0x124        
        client::fogparams_t m_CurrentFog; // 0x128        
        // m_hOldFogController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_FogController> m_hOldFogController;
        char m_hOldFogController[0x4]; // 0x190        
        bool m_bOverrideFogColor[5]; // 0x194        
        Color m_OverrideFogColor[5]; // 0x199        
        bool m_bOverrideFogStartEnd[5]; // 0x1ad        
        [[maybe_unused]] std::uint8_t pad_0x1b2[0x2]; // 0x1b2
        float m_fOverrideFogStart[5]; // 0x1b4        
        float m_fOverrideFogEnd[5]; // 0x1c8        
        // m_hActivePostProcessingVolume has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_PostProcessingVolume> m_hActivePostProcessingVolume;
        char m_hActivePostProcessingVolume[0x4]; // 0x1dc        
        QAngle m_angDemoViewAngles; // 0x1e0        
        [[maybe_unused]] std::uint8_t pad_0x1ec[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPlayer_CameraServices because it is not a standard-layout class
    static_assert(sizeof(CPlayer_CameraServices) == 0x1f8);
};
