#pragma once
#include "source2sdk/client/CNavLinkAnimgraphVar.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
    // Size: 0x100
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CNavLinkMovementVData
    {
    public:
        // metadata: MPropertyDescription "Model used by the tools only to populate comboboxes for things like animgraph parameter pickers"
        // m_sToolsOnlyOwnerModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sToolsOnlyOwnerModelName;
        char m_sToolsOnlyOwnerModelName[0xe0]; // 0x0        
        // metadata: MPropertyFriendlyName "Is Interpolated"
        // metadata: MPropertyDescription "Indicates that the animation has a segment that's interpolated. In general using this on navlinks that traverse +/- 50% of the recommended distance should look okay."
        bool m_bIsInterpolated; // 0xe0        
        [[maybe_unused]] std::uint8_t pad_0xe1[0x3]; // 0xe1
        // metadata: MPropertyFriendlyName "Recommended Distance"
        // metadata: MPropertyDescription "Recommended distance this movement traverses"
        uint32_t m_unRecommendedDistance; // 0xe4        
        // metadata: MPropertyFriendlyName "Animgraph Variables"
        // metadata: MPropertyDescription "List of animgraph variables to use when moving through this navlink. Can include multiple, with different amounts of angular slack. The most permissive animgraph variable that exists on the entity's animgraph will be used,"
        // metadata: MPropertyAutoExpandSelf
        // m_vecAnimgraphVars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CNavLinkAnimgraphVar> m_vecAnimgraphVars;
        char m_vecAnimgraphVars[0x18]; // 0xe8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNavLinkMovementVData, m_sToolsOnlyOwnerModelName) == 0x0);
    static_assert(offsetof(CNavLinkMovementVData, m_bIsInterpolated) == 0xe0);
    static_assert(offsetof(CNavLinkMovementVData, m_unRecommendedDistance) == 0xe4);
    static_assert(offsetof(CNavLinkMovementVData, m_vecAnimgraphVars) == 0xe8);
    
    static_assert(sizeof(CNavLinkMovementVData) == 0x100);
};
