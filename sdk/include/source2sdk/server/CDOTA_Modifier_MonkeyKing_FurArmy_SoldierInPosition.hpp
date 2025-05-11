#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vTargetPos; // 0x17f8            
            // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttackTarget;
            char m_hAttackTarget[0x4]; // 0x1804            
            float attack_speed; // 0x1808            
            float second_radius; // 0x180c            
            std::int32_t outer_attack_buffer; // 0x1810            
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x1814            
            bool m_bDisarmed; // 0x1818            
            uint8_t _pad1819[0x3]; // 0x1819
            source2sdk::entity2::GameTime_t m_flNextAttackTime; // 0x181c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1820            
            bool m_bAutoSpawn; // 0x1824            
            uint8_t _pad1825[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition) == 0x1828);
    };
};
