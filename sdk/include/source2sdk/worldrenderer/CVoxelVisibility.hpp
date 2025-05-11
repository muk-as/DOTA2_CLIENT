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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xa0
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVoxelVisibility
        {
        public:
            uint8_t _pad0000[0x40]; // 0x0
            std::uint32_t m_nBaseClusterCount; // 0x40            
            std::uint32_t m_nPVSBytesPerCluster; // 0x44            
            Vector m_vMinBounds; // 0x48            
            Vector m_vMaxBounds; // 0x54            
            float m_flGridSize; // 0x60            
            std::uint32_t m_nSkyVisibilityCluster; // 0x64            
            std::uint32_t m_nSunVisibilityCluster; // 0x68            
            source2sdk::worldrenderer::VoxelVisBlockOffset_t m_NodeBlock; // 0x6c            
            source2sdk::worldrenderer::VoxelVisBlockOffset_t m_RegionBlock; // 0x74            
            source2sdk::worldrenderer::VoxelVisBlockOffset_t m_EnclosedClusterListBlock; // 0x7c            
            source2sdk::worldrenderer::VoxelVisBlockOffset_t m_EnclosedClustersBlock; // 0x84            
            source2sdk::worldrenderer::VoxelVisBlockOffset_t m_MasksBlock; // 0x8c            
            source2sdk::worldrenderer::VoxelVisBlockOffset_t m_nVisBlocks; // 0x94            
            uint8_t _pad009c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_nBaseClusterCount) == 0x40);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_nPVSBytesPerCluster) == 0x44);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_vMinBounds) == 0x48);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_vMaxBounds) == 0x54);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_flGridSize) == 0x60);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_nSkyVisibilityCluster) == 0x64);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_nSunVisibilityCluster) == 0x68);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_NodeBlock) == 0x6c);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_RegionBlock) == 0x74);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_EnclosedClusterListBlock) == 0x7c);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_EnclosedClustersBlock) == 0x84);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_MasksBlock) == 0x8c);
        static_assert(offsetof(source2sdk::worldrenderer::CVoxelVisibility, m_nVisBlocks) == 0x94);
        
        static_assert(sizeof(source2sdk::worldrenderer::CVoxelVisibility) == 0xa0);
    };
};
