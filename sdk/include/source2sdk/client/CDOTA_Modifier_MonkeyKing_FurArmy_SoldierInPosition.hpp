#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vTargetPos; // 0x1878            
            // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttackTarget;
            char m_hAttackTarget[0x4]; // 0x1884            
            float attack_speed; // 0x1888            
            float final_radius; // 0x188c            
            std::int32_t outer_attack_buffer; // 0x1890            
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x1894            
            bool m_bDisarmed; // 0x1898            
            uint8_t _pad1899[0x3]; // 0x1899
            source2sdk::entity2::GameTime_t m_flNextAttackTime; // 0x189c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18a0            
            bool m_bAutoSpawn; // 0x18a4            
            uint8_t _pad18a5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition) == 0x18a8);
    };
};
