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
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Beastmaster_CallOfTheWild_Hawk : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwner;
            char m_hOwner[0x_]; // 0x_            
            float attack_radius; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastAttack; // 0x_            
            float roaming_seconds_per_rotation; // 0x_            
            float roaming_radius; // 0x_            
            float attack_interval; // 0x_            
            float min_move_speed; // 0x_            
            float max_move_speed; // 0x_            
            std::int32_t m_iPreviousHawkCount; // 0x_            
            float m_flRotation; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Beastmaster_CallOfTheWild_Hawk because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Beastmaster_CallOfTheWild_Hawk) == 0x_);
    };
};
