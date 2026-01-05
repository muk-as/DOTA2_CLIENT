#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AmphibianRhapsodySong_t.hpp"
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Largo_AmphibianRhapsody_Self : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x_            
            float duration; // 0x_            
            float rhythm_interval; // 0x_            
            float rhythm_grace_period; // 0x_            
            float armor_per_stack; // 0x_            
            std::int32_t max_stacks; // 0x_            
            float stack_duration; // 0x_            
            std::int32_t double_song; // 0x_            
            std::int32_t stack_decrement_on_exit; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::AmphibianRhapsodySong_t m_nCurrentSong; // 0x_            
            source2sdk::client::AmphibianRhapsodySong_t m_nCurrentSecondSong; // 0x_            
            std::int32_t m_nCurrentSongMusicTrack; // 0x_            
            float m_flAnticipatePoseTime; // 0x_            
            bool m_bPlayFinishSongSound; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool bRhythmFXStarted; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flNextRestartParticleTime; // 0x_            
            std::int32_t m_iPoseParameterAnticipation; // 0x_            
            float m_flLastPoseTime; // 0x_            
            bool m_bMusicStarted; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Largo_AmphibianRhapsody_Self because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Largo_AmphibianRhapsody_Self) == 0x_);
    };
};
