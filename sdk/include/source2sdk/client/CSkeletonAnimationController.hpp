#pragma once
#include "source2sdk/client/ISkeletonAnimationController.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CSkeletonInstance;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x10
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CSkeletonAnimationController : public client::ISkeletonAnimationController
    {
    public:
        // metadata: MNetworkDisable
        client::CSkeletonInstance* m_pSkeletonInstance; // 0x8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSkeletonAnimationController because it is not a standard-layout class
    static_assert(sizeof(CSkeletonAnimationController) == 0x10);
};
