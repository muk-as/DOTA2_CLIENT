#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Beastmaster_CallOfTheWild_Hawk : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x1888            
            float attack_radius; // 0x188c            
            source2sdk::entity2::GameTime_t m_flLastAttack; // 0x1890            
            float roaming_seconds_per_rotation; // 0x1894            
            float roaming_radius; // 0x1898            
            float attack_interval; // 0x189c            
            float min_move_speed; // 0x18a0            
            float max_move_speed; // 0x18a4            
            std::int32_t m_iPreviousHawkCount; // 0x18a8            
            float m_flRotation; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Beastmaster_CallOfTheWild_Hawk because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Beastmaster_CallOfTheWild_Hawk) == 0x18b0);
    };
};
