#pragma once
#include "source2sdk/animlib/CNmGraphDefinition__ChildGraphSlot_t.hpp"
#include "source2sdk/animlib/CNmGraphDefinition__ExternalGraphSlot_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x130
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmGraphDefinition
    {
    public:
        // m_persistentNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_persistentNodeIndices;
        char m_persistentNodeIndices[0x18]; // 0x0        
        int16_t m_nRootNodeIdx; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1a[0x6]; // 0x1a
        // m_controlParameterIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CGlobalSymbol> m_controlParameterIDs;
        char m_controlParameterIDs[0x18]; // 0x20        
        // m_virtualParameterIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CGlobalSymbol> m_virtualParameterIDs;
        char m_virtualParameterIDs[0x18]; // 0x38        
        // m_virtualParameterNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_virtualParameterNodeIndices;
        char m_virtualParameterNodeIndices[0x18]; // 0x50        
        // m_childGraphSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animlib::CNmGraphDefinition__ChildGraphSlot_t> m_childGraphSlots;
        char m_childGraphSlots[0x18]; // 0x68        
        // m_externalGraphSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animlib::CNmGraphDefinition__ExternalGraphSlot_t> m_externalGraphSlots;
        char m_externalGraphSlots[0x18]; // 0x80        
        [[maybe_unused]] std::uint8_t pad_0x98[0x70]; // 0x98
        // m_nodePaths has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_nodePaths;
        char m_nodePaths[0x18]; // 0x108        
        V_uuid_t m_runtimeVersionID; // 0x120        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmGraphDefinition, m_persistentNodeIndices) == 0x0);
    static_assert(offsetof(CNmGraphDefinition, m_nRootNodeIdx) == 0x18);
    static_assert(offsetof(CNmGraphDefinition, m_controlParameterIDs) == 0x20);
    static_assert(offsetof(CNmGraphDefinition, m_virtualParameterIDs) == 0x38);
    static_assert(offsetof(CNmGraphDefinition, m_virtualParameterNodeIndices) == 0x50);
    static_assert(offsetof(CNmGraphDefinition, m_childGraphSlots) == 0x68);
    static_assert(offsetof(CNmGraphDefinition, m_externalGraphSlots) == 0x80);
    static_assert(offsetof(CNmGraphDefinition, m_nodePaths) == 0x108);
    static_assert(offsetof(CNmGraphDefinition, m_runtimeVersionID) == 0x120);
    
    static_assert(sizeof(CNmGraphDefinition) == 0x130);
};
