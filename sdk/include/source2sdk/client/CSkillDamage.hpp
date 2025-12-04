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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSkillDamage
        {
        public:
            // metadata: MPropertyDescription "Damage Dealt (in the case of NPC vs NPC damage, medium skill times the NPC damage scalar is used)"
            source2sdk::client::CSkillFloat m_flDamage; // 0x_            
            // metadata: MPropertyDescription "Damage Scalar for NPC vs NPC cases"
            float m_flNPCDamageScalarVsNPC; // 0x_            
            // metadata: MPropertyDescription "If specified, the damage used to compute physics forces. Otherwise normal damage is used (and is not scaled by the NPC damage scalar."
            float m_flPhysicsForceDamage; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSkillDamage, m_flDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CSkillDamage, m_flNPCDamageScalarVsNPC) == 0x_);
        static_assert(offsetof(source2sdk::client::CSkillDamage, m_flPhysicsForceDamage) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSkillDamage) == 0x_);
    };
};
