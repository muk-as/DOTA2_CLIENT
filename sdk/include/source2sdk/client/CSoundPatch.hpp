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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CSoundPatch
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CSoundEnvelope m_pitch; // 0x_            
            source2sdk::client::CSoundEnvelope m_volume; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_shutdownTime; // 0x_            
            float m_flLastTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszSoundScriptName; // 0x_            
            // m_hEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEnt;
            char m_hEnt[0x_]; // 0x_            
            CEntityIndex m_soundEntityIndex; // 0x_            
            Vector m_soundOrigin; // 0x_            
            std::int32_t m_isPlaying; // 0x_            
            source2sdk::client::CCopyRecipientFilter m_Filter; // 0x_            
            float m_flCloseCaptionDuration; // 0x_            
            bool m_bUpdatedSoundOrigin; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszClassName; // 0x_            
            
            // Datamap fields:
            // void m_guid; // 0x_
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_pitch) == 0x_);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_volume) == 0x_);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_shutdownTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_flLastTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_iszSoundScriptName) == 0x_);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_hEnt) == 0x_);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_soundEntityIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_soundOrigin) == 0x_);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_isPlaying) == 0x_);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_Filter) == 0x_);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_flCloseCaptionDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_bUpdatedSoundOrigin) == 0x_);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_iszClassName) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSoundPatch) == 0x_);
    };
};
