#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ISkeletonAnimationController.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CSkeletonInstance;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CSkeletonAnimationController : public source2sdk::client::ISkeletonAnimationController
        {
        public:
            source2sdk::client::CSkeletonInstance* m_pSkeletonInstance; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSkeletonAnimationController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSkeletonAnimationController) == 0x_);
    };
};
