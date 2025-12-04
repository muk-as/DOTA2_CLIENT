#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/server/audioparams_t.hpp"
#include "source2sdk/server/fogplayerparams_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CColorCorrection;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CEnvSoundscapeTriggerable;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPostProcessingVolume;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CTonemapController2;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "fogplayerparams_t m_PlayerFog"
        // static metadata: MNetworkVarNames "CHandle< CColorCorrection> m_hColorCorrectionCtrl"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hViewEntity"
        // static metadata: MNetworkVarNames "CHandle< CTonemapController2> m_hTonemapController"
        // static metadata: MNetworkVarNames "audioparams_t m_audio"
        // static metadata: MNetworkVarNames "CHandle<CPostProcessingVolume> m_PostProcessingVolumes"
        #pragma pack(push, 1)
        class CPlayer_CameraServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::server::fogplayerparams_t m_PlayerFog; // 0x_            
            // metadata: MNetworkEnable
            // m_hColorCorrectionCtrl has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CColorCorrection> m_hColorCorrectionCtrl;
            char m_hColorCorrectionCtrl[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hViewEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewEntity;
            char m_hViewEntity[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            // m_hTonemapController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CTonemapController2> m_hTonemapController;
            char m_hTonemapController[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            source2sdk::server::audioparams_t m_audio; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            // m_PostProcessingVolumes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CPostProcessingVolume>> m_PostProcessingVolumes;
            char m_PostProcessingVolumes[0x_]; // 0x_            
            float m_flOldPlayerZ; // 0x_            
            float m_flOldPlayerViewOffsetZ; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hTriggerSoundscapeList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CEnvSoundscapeTriggerable>> m_hTriggerSoundscapeList;
            char m_hTriggerSoundscapeList[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayer_CameraServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlayer_CameraServices) == 0x_);
    };
};
