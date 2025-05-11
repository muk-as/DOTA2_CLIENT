#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/SoundFlags_t.hpp"
#include "source2sdk/server/SoundTypes_t.hpp"
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
        struct CBaseFilter;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x698
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvMicrophone : public source2sdk::server::CPointEntity
        {
        public:
            bool m_bDisabled; // 0x4d8            
            uint8_t _pad04d9[0x3]; // 0x4d9
            // m_hMeasureTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hMeasureTarget;
            char m_hMeasureTarget[0x4]; // 0x4dc            
            source2sdk::server::SoundTypes_t m_nSoundType; // 0x4e0            
            source2sdk::server::SoundFlags_t m_nSoundFlags; // 0x4e2            
            float m_flSensitivity; // 0x4e4            
            float m_flSmoothFactor; // 0x4e8            
            float m_flMaxRange; // 0x4ec            
            CUtlSymbolLarge m_iszSpeakerName; // 0x4f0            
            // m_hSpeaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSpeaker;
            char m_hSpeaker[0x4]; // 0x4f8            
            bool m_bAvoidFeedback; // 0x4fc            
            uint8_t _pad04fd[0x3]; // 0x4fd
            std::int32_t m_iSpeakerDSPPreset; // 0x500            
            uint8_t _pad0504[0x4]; // 0x504
            CUtlSymbolLarge m_iszListenFilter; // 0x508            
            // m_hListenFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hListenFilter;
            char m_hListenFilter[0x4]; // 0x510            
            uint8_t _pad0514[0x4]; // 0x514
            // m_SoundLevel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_SoundLevel;
            char m_SoundLevel[0x28]; // 0x518            
            source2sdk::entity2::CEntityIOOutput m_OnRoutedSound; // 0x540            
            source2sdk::entity2::CEntityIOOutput m_OnHeardSound; // 0x568            
            char m_szLastSound[256]; // 0x590            
            std::int32_t m_iLastRoutedFrame; // 0x690            
            uint8_t _pad0694[0x4];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // CUtlSymbolLarge InputSetSpeakerName; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvMicrophone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvMicrophone) == 0x698);
    };
};
