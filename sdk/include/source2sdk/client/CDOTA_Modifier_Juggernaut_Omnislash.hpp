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
        // Size: 0x1830
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Juggernaut_Omnislash : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x17f8            
            // m_hLastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastTarget;
            char m_hLastTarget[0x4]; // 0x17fc            
            std::int32_t m_nJumps; // 0x1800            
            std::int32_t bonus_damage; // 0x1804            
            std::int32_t bonus_attack_speed; // 0x1808            
            float omni_slash_radius; // 0x180c            
            float attack_rate_multiplier; // 0x1810            
            bool m_bFirstHit; // 0x1814            
            uint8_t _pad1815[0x3]; // 0x1815
            std::int32_t m_iTotalDamage; // 0x1818            
            std::int32_t m_iHeroDamage; // 0x181c            
            std::int32_t m_iKilledHeroes; // 0x1820            
            source2sdk::entity2::GameTime_t m_fNextAttackTime; // 0x1824            
            bool m_bScepterCast; // 0x1828            
            bool m_bReflection; // 0x1829            
            bool m_bEndNext; // 0x182a            
            uint8_t _pad182b[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Juggernaut_Omnislash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Juggernaut_Omnislash) == 0x1830);
    };
};
