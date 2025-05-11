#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCopyRecipientFilter.hpp"
#include "source2sdk/client/CSoundEnvelope.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x90
        // Has VTable
        #pragma pack(push, 1)
        class CSoundPatch
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::client::CSoundEnvelope m_pitch; // 0x8            
            source2sdk::client::CSoundEnvelope m_volume; // 0x18            
            uint8_t _pad0028[0x8]; // 0x28
            float m_shutdownTime; // 0x30            
            float m_flLastTime; // 0x34            
            CUtlSymbolLarge m_iszSoundScriptName; // 0x38            
            // m_hEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEnt;
            char m_hEnt[0x4]; // 0x40            
            CEntityIndex m_soundEntityIndex; // 0x44            
            Vector m_soundOrigin; // 0x48            
            std::int32_t m_isPlaying; // 0x54            
            source2sdk::client::CCopyRecipientFilter m_Filter; // 0x58            
            float m_flCloseCaptionDuration; // 0x80            
            bool m_bUpdatedSoundOrigin; // 0x84            
            uint8_t _pad0085[0x3]; // 0x85
            CUtlSymbolLarge m_iszClassName; // 0x88            
            
            // Datamap fields:
            // void m_guid; // 0x28
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_pitch) == 0x8);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_volume) == 0x18);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_shutdownTime) == 0x30);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_flLastTime) == 0x34);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_iszSoundScriptName) == 0x38);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_hEnt) == 0x40);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_soundEntityIndex) == 0x44);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_soundOrigin) == 0x48);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_isPlaying) == 0x54);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_Filter) == 0x58);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_flCloseCaptionDuration) == 0x80);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_bUpdatedSoundOrigin) == 0x84);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_iszClassName) == 0x88);
        
        static_assert(sizeof(source2sdk::client::CSoundPatch) == 0x90);
    };
};
