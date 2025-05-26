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
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDestructiblePartsSystemData_PartData
        {
        public:
            // metadata: MPropertyDescription "Name for this destructible part."
            CUtlString m_sName; // 0x0            
            // metadata: MPropertyStartGroup "+Model Setup"
            // metadata: MPropertyDescription "Name of the breakable part to trigger breaking on when health reaches zero."
            // metadata: MPropertyAttributeEditor "ModelDocPicker( 15 )"
            CGlobalSymbol m_sBreakablePieceName; // 0x8            
            // metadata: MPropertyStartGroup "+Model Setup/+Body Group"
            // metadata: MPropertyDescription "Body group to set when this part is broken."
            // metadata: MPropertyAttributeEditor "VDataModelBodyGroup( m_sModelName )"
            CGlobalSymbol m_sBodyGroupName; // 0x10            
            // metadata: MPropertyDescription "Value to set for the body group when the part is broken."
            std::int32_t m_nBodyGroupValue; // 0x18            
            // metadata: MPropertyStartGroup "+Damage"
            // metadata: MPropertyDescription "Total health of this part. When it reaches 0, the part is 'broken' using the breakable prop system."
            source2sdk::client::CSkillInt m_nHealth; // 0x1c            
            // metadata: MPropertyDescription "How damage to this part is handled."
            source2sdk::client::EDestructiblePartDamagePassThroughType m_nDamagePassthroughType; // 0x2c            
            // metadata: MPropertyStartGroup "+Death"
            // metadata: MPropertyDescription "Should the entity die when this part is destroyed?"
            bool m_bKillEntityOnDestruction; // 0x30            
            uint8_t _pad0031[0x7]; // 0x31
            // metadata: MPropertyDescription "Custom death handshake to set when this part is destroyed."
            // metadata: MPropertySuppressExpr "m_bKillEntityOnDestruction == false"
            CGlobalSymbol m_sCustomDeathHandshake; // 0x38            
            // metadata: MPropertyDescription "Whether the part should be destroyed when the entity dies."
            bool m_bShouldDestroyOnDeath; // 0x40            
            uint8_t _pad0041[0x3]; // 0x41
            // metadata: MPropertyDescription "Time after death the part should be destroyed"
            // metadata: MPropertySuppressExpr "m_bShouldDestroyOnDeath == false"
            source2sdk::tier2::CRangeFloat m_flDeathDestroyTime; // 0x44            
            uint8_t _pad004c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_sName) == 0x0);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_sBreakablePieceName) == 0x8);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_sBodyGroupName) == 0x10);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_nBodyGroupValue) == 0x18);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_nHealth) == 0x1c);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_nDamagePassthroughType) == 0x2c);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_bKillEntityOnDestruction) == 0x30);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_sCustomDeathHandshake) == 0x38);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_bShouldDestroyOnDeath) == 0x40);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_flDeathDestroyTime) == 0x44);
        
        static_assert(sizeof(source2sdk::client::CDestructiblePartsSystemData_PartData) == 0x50);
    };
};
