#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/worldrenderer/VoxelVisBlockOffset_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVoxelVisibility
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::uint32_t m_nBaseClusterCount; // 0x_            
            std::uint32_t m_nPVSBytesPerCluster; // 0x_            
            Vector m_vMinBounds; // 0x_            
            Vector m_vMaxBounds; // 0x_            
            float m_flGridSize; // 0x_            
            std::uint32_t m_nSkyVisibilityCluster; // 0x_            
            std::uint32_t m_nSunVisibilityCluster; // 0x_            
            source2sdk::worldrenderer::VoxelVisBlockOffset_t m_NodeBlock; // 0x_            
            source2sdk::worldrenderer::VoxelVisBlockOffset_t m_RegionBlock; // 0x_            
            source2sdk::worldrenderer::VoxelVisBlockOffset_t m_EnclosedClusterListBlock; // 0x_            
            source2sdk::worldrenderer::VoxelVisBlockOffset_t m_EnclosedClustersBlock; // 0x_            
            source2sdk::worldrenderer::VoxelVisBlockOffset_t m_MasksBlock; // 0x_            
            source2sdk::worldrenderer::VoxelVisBlockOffset_t m_nVisBlocks; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_nBaseClusterCount) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_nPVSBytesPerCluster) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_vMinBounds) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_vMaxBounds) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_flGridSize) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_nSkyVisibilityCluster) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_nSunVisibilityCluster) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_NodeBlock) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_RegionBlock) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_EnclosedClusterListBlock) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_EnclosedClustersBlock) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_MasksBlock) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_nVisBlocks) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::CVoxelVisibility) == 0x_);
    };
};
