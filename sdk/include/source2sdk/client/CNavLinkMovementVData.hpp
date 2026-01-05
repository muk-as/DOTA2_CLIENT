#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNavLinkAnimgraphVar.hpp"
#include "source2sdk/client/CNavLinkMovementVariantDefinition.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CNavLinkMovementVData
        {
        public:
            // metadata: MPropertyDescription "Model used by the tools only to populate comboboxes for things like animgraph parameter pickers"
            // metadata: MPropertyProvidesEditContextString
            // m_sToolsOnlyOwnerModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sToolsOnlyOwnerModelName;
            char m_sToolsOnlyOwnerModelName[0x_]; // 0x_            
            // metadata: MPropertyFriendlyName "Animgraph Variables"
            // metadata: MPropertyDescription "List of animgraph variables to use when moving through this navlink. Can include multiple, with different amounts of angular slack. The most permissive animgraph variable that exists on the entity's animgraph will be used,"
            // metadata: MPropertyAutoExpandSelf
            // m_vecAnimgraphVars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CNavLinkAnimgraphVar> m_vecAnimgraphVars;
            char m_vecAnimgraphVars[0x_]; // 0x_            
            // m_vecVariants has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CNavLinkMovementVariantDefinition> m_vecVariants;
            char m_vecVariants[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CNavLinkMovementVData, m_sToolsOnlyOwnerModelName) == 0x_);
        static_assert(offsetof(source2sdk::client::CNavLinkMovementVData, m_vecAnimgraphVars) == 0x_);
        static_assert(offsetof(source2sdk::client::CNavLinkMovementVData, m_vecVariants) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CNavLinkMovementVData) == 0x_);
    };
};
