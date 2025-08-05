#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CGameSceneNode.hpp"
#include "source2sdk/client/CModelState.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x510
        // Has VTable
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "CModelState m_modelState"
        // static metadata: MNetworkVarNames "bool m_bIsAnimationEnabled"
        // static metadata: MNetworkVarNames "bool m_bUseParentRenderBounds"
        // static metadata: MNetworkVarNames "CUtlStringToken m_materialGroup"
        // static metadata: MNetworkVarNames "uint8 m_nHitboxSet"
        #pragma pack(push, 1)
        class CSkeletonInstance : public source2sdk::client::CGameSceneNode
        {
        public:
            uint8_t _pad0160[0x10]; // 0x160
            // metadata: MNetworkEnable
            source2sdk::client::CModelState m_modelState; // 0x170            
            // metadata: MNetworkEnable
            bool m_bIsAnimationEnabled; // 0x470            
            // metadata: MNetworkEnable
            bool m_bUseParentRenderBounds; // 0x471            
            bool m_bDisableSolidCollisionsForHierarchy; // 0x472            
            // start of bitfield block
            uint8_t m_bDirtyMotionType: 1;
            uint8_t m_bIsGeneratingLatchedParentSpaceState: 1;
            // end of bitfield block// 2 bits
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "skeletonMaterialGroupChanged"
            CUtlStringToken m_materialGroup; // 0x474            
            // metadata: MNetworkEnable
            std::uint8_t m_nHitboxSet; // 0x478            
            uint8_t _pad0479[0x97];
            
            // Datamap fields:
            // Vector velocity; // 0x7fffffff
            // Vector rotationAxis; // 0x7fffffff
            // float rotationSpeed; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSkeletonInstance because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSkeletonInstance) == 0x510);
    };
};
