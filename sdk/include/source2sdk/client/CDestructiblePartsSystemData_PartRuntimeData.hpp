#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSkillInt.hpp"
#include "source2sdk/client/EDestructiblePartDamagePassThroughType.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x30
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDestructiblePartsSystemData_PartRuntimeData
        {
        public:
            // metadata: MPropertyStartGroup "+Damage"
            // metadata: MPropertyDescription "Total health of this part. When it reaches 0, the part is 'broken' using the breakable prop system."
            source2sdk::client::CSkillInt m_nHealth; // 0x0            
            // metadata: MPropertyDescription "How damage to this part is handled."
            source2sdk::client::EDestructiblePartDamagePassThroughType m_nDamagePassthroughType; // 0x10            
            // metadata: MPropertyStartGroup "+Death"
            // metadata: MPropertyDescription "Should the entity die when this part is destroyed?"
            bool m_bKillEntityOnDestruction; // 0x14            
            uint8_t _pad0015[0x3]; // 0x15
            // metadata: MPropertyDescription "Custom death handshake to set when this part is destroyed."
            // metadata: MPropertySuppressExpr "m_bKillEntityOnDestruction == false"
            CGlobalSymbol m_sCustomDeathHandshake; // 0x18            
            // metadata: MPropertyDescription "Whether the part should be destroyed when the entity dies."
            bool m_bShouldDestroyOnDeath; // 0x20            
            uint8_t _pad0021[0x3]; // 0x21
            // metadata: MPropertyDescription "Time after death the part should be destroyed"
            // metadata: MPropertySuppressExpr "m_bShouldDestroyOnDeath == false"
            source2sdk::tier2::CRangeFloat m_flDeathDestroyTime; // 0x24            
            uint8_t _pad002c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartRuntimeData, m_nHealth) == 0x0);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartRuntimeData, m_nDamagePassthroughType) == 0x10);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartRuntimeData, m_bKillEntityOnDestruction) == 0x14);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartRuntimeData, m_sCustomDeathHandshake) == 0x18);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartRuntimeData, m_bShouldDestroyOnDeath) == 0x20);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartRuntimeData, m_flDeathDestroyTime) == 0x24);
        
        static_assert(sizeof(source2sdk::client::CDestructiblePartsSystemData_PartRuntimeData) == 0x30);
    };
};
