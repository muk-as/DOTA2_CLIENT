#pragma once
#include "source2sdk/client/CDestructiblePartsSystemData_PartRuntimeData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
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
        // metadata: MPropertyAttributeEditor "VDataModelBreakPiece( m_sModelName )"
        CGlobalSymbol m_sBreakablePieceName; // 0x8        
        // metadata: MPropertyStartGroup "+Model Setup/+Body Group"
        // metadata: MPropertyDescription "Body group to set when this part is broken."
        // metadata: MPropertyAttributeEditor "VDataModelBodyGroup( m_sModelName )"
        CGlobalSymbol m_sBodyGroupName; // 0x10        
        // metadata: MPropertyDescription "Value to set for the body group when the part is broken."
        int32_t m_nBodyGroupValue; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4]; // 0x1c
        // metadata: MPropertyStartGroup "+Model Setup/+Animgraph"
        // metadata: MPropertyDescription "Animgraph parameter (boolean) to set when this part is destroyed."
        // metadata: MPropertyAttributeEditor "VDataAnimGraphParamBool( m_sModelName )"
        CGlobalSymbol m_sAnimGraphParamName_PartDestroyed; // 0x20        
        // metadata: MPropertyDescription "Animgraph parameter (float) with the normalized (0-1) health of this part."
        // metadata: MPropertyAttributeEditor "VDataAnimGraphParamFloat( m_sModelName )"
        CGlobalSymbol m_sAnimGraphParamName_PartNormalizedHealth; // 0x28        
        // metadata: MPropertyStartGroup
        // metadata: MPropertyDescription "Default runtime data for this part - can be overriden in npc_units.vdata if such file exists."
        client::CDestructiblePartsSystemData_PartRuntimeData m_DefaultRuntimeData; // 0x30        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDestructiblePartsSystemData_PartData, m_sName) == 0x0);
    static_assert(offsetof(CDestructiblePartsSystemData_PartData, m_sBreakablePieceName) == 0x8);
    static_assert(offsetof(CDestructiblePartsSystemData_PartData, m_sBodyGroupName) == 0x10);
    static_assert(offsetof(CDestructiblePartsSystemData_PartData, m_nBodyGroupValue) == 0x18);
    static_assert(offsetof(CDestructiblePartsSystemData_PartData, m_sAnimGraphParamName_PartDestroyed) == 0x20);
    static_assert(offsetof(CDestructiblePartsSystemData_PartData, m_sAnimGraphParamName_PartNormalizedHealth) == 0x28);
    static_assert(offsetof(CDestructiblePartsSystemData_PartData, m_DefaultRuntimeData) == 0x30);
    
    static_assert(sizeof(CDestructiblePartsSystemData_PartData) == 0x50);
};
