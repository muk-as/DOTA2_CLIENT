#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSkillFloat.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSkillDamage
        {
        public:
            // metadata: MPropertyDescription "Damage Dealt (in the case of NPC vs NPC damage, medium skill times the NPC damage scalar is used)"
            source2sdk::client::CSkillFloat m_flDamage; // 0x0            
            // metadata: MPropertyDescription "Damage Scalar for NPC vs NPC cases"
            float m_flNPCDamageScalarVsNPC; // 0x10            
            // metadata: MPropertyDescription "If specified, the damage used to compute physics forces. Otherwise normal damage is used (and is not scaled by the NPC damage scalar."
            float m_flPhysicsForceDamage; // 0x14            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSkillDamage, m_flDamage) == 0x0);
        static_assert(offsetof(source2sdk::client::CSkillDamage, m_flNPCDamageScalarVsNPC) == 0x10);
        static_assert(offsetof(source2sdk::client::CSkillDamage, m_flPhysicsForceDamage) == 0x14);
        
        static_assert(sizeof(source2sdk::client::CSkillDamage) == 0x18);
    };
};
