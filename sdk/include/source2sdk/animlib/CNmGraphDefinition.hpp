#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmGraphDefinition_ExternalGraphSlot_t.hpp"
#include "source2sdk/animlib/CNmGraphDefinition_ExternalPoseSlot_t.hpp"
#include "source2sdk/animlib/CNmGraphDefinition_ReferencedGraphSlot_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmSkeleton.hpp"
namespace source2sdk
{
    namespace animlib
    {
        struct CNmGraphVariationUserData;
    };
};

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmGraphDefinition
        {
        public:
            CGlobalSymbol m_variationID; // 0x_            
            // m_skeleton has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmSkeleton> m_skeleton;
            char m_skeleton[0x_]; // 0x_            
            source2sdk::animlib::CNmGraphVariationUserData* m_pUserData; // 0x_            
            // m_persistentNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_persistentNodeIndices;
            char m_persistentNodeIndices[0x_]; // 0x_            
            std::int16_t m_nRootNodeIdx; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_controlParameterIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_controlParameterIDs;
            char m_controlParameterIDs[0x_]; // 0x_            
            // m_virtualParameterIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_virtualParameterIDs;
            char m_virtualParameterIDs[0x_]; // 0x_            
            // m_virtualParameterNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_virtualParameterNodeIndices;
            char m_virtualParameterNodeIndices[0x_]; // 0x_            
            // m_referencedGraphSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::CNmGraphDefinition_ReferencedGraphSlot_t> m_referencedGraphSlots;
            char m_referencedGraphSlots[0x_]; // 0x_            
            // m_externalGraphSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::CNmGraphDefinition_ExternalGraphSlot_t> m_externalGraphSlots;
            char m_externalGraphSlots[0x_]; // 0x_            
            // m_externalPoseSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::CNmGraphDefinition_ExternalPoseSlot_t> m_externalPoseSlots;
            char m_externalPoseSlots[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_nodePaths has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_nodePaths;
            char m_nodePaths[0x_]; // 0x_            
            // m_resources has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandleVoid> m_resources;
            char m_resources[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_variationID) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_skeleton) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_pUserData) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_persistentNodeIndices) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_nRootNodeIdx) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_controlParameterIDs) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_virtualParameterIDs) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_virtualParameterNodeIndices) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_referencedGraphSlots) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_externalGraphSlots) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_externalPoseSlots) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_nodePaths) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition, m_resources) == 0x_);
        
        static_assert(sizeof(source2sdk::animlib::CNmGraphDefinition) == 0x_);
    };
};
