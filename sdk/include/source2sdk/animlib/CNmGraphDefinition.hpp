#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmGraphDefinition_ExternalGraphSlot_t.hpp"
#include "source2sdk/animlib/CNmGraphDefinition_ReferencedGraphSlot_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmSkeleton.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x190
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmGraphDefinition
        {
        public:
            CGlobalSymbol m_variationID; // 0x0            
            // m_skeleton has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmSkeleton> m_skeleton;
            char m_skeleton[0x8]; // 0x8            
            V_uuid_t m_runtimeVersionID; // 0x10            
            // m_persistentNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_persistentNodeIndices;
            char m_persistentNodeIndices[0x18]; // 0x20            
            std::int16_t m_nRootNodeIdx; // 0x38            
            uint8_t _pad003a[0x6]; // 0x3a
            // m_controlParameterIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_controlParameterIDs;
            char m_controlParameterIDs[0x18]; // 0x40            
            // m_virtualParameterIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_virtualParameterIDs;
            char m_virtualParameterIDs[0x18]; // 0x58            
            // m_virtualParameterNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_virtualParameterNodeIndices;
            char m_virtualParameterNodeIndices[0x18]; // 0x70            
            // m_referencedGraphSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::CNmGraphDefinition_ReferencedGraphSlot_t> m_referencedGraphSlots;
            char m_referencedGraphSlots[0x18]; // 0x88            
            // m_externalGraphSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::CNmGraphDefinition_ExternalGraphSlot_t> m_externalGraphSlots;
            char m_externalGraphSlots[0x18]; // 0xa0            
            uint8_t _pad00b8[0x70]; // 0xb8
            // m_nodePaths has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_nodePaths;
            char m_nodePaths[0x18]; // 0x128            
            // m_resources has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandleVoid> m_resources;
            char m_resources[0x18]; // 0x140            
            uint8_t _pad0158[0x38];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_variationID) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_skeleton) == 0x8);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_runtimeVersionID) == 0x10);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_persistentNodeIndices) == 0x20);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_nRootNodeIdx) == 0x38);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_controlParameterIDs) == 0x40);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_virtualParameterIDs) == 0x58);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_virtualParameterNodeIndices) == 0x70);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_referencedGraphSlots) == 0x88);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_externalGraphSlots) == 0xa0);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_nodePaths) == 0x128);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_resources) == 0x140);
        
        static_assert(sizeof(source2sdk::animlib::CNmGraphDefinition) == 0x190);
    };
};
