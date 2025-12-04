#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct sSpiritInfo;
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
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DeathProphet_Scepter : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x_            
            float spirit_speed; // 0x_            
            float max_distance; // 0x_            
            float give_up_distance; // 0x_            
            float min_damage; // 0x_            
            float max_damage; // 0x_            
            std::int32_t heal_percent; // 0x_            
            std::int32_t spirit_duration; // 0x_            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x_            
            source2sdk::entity2::GameTime_t m_fLastThinkTime; // 0x_            
            bool m_bExpired; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::sSpiritInfo* m_SpiritInfo; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DeathProphet_Scepter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DeathProphet_Scepter) == 0x_);
    };
};
