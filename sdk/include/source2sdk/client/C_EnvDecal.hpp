#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9a8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "HMaterialStrong m_hDecalMaterial"
        // static metadata: MNetworkVarNames "float m_flWidth"
        // static metadata: MNetworkVarNames "float m_flHeight"
        // static metadata: MNetworkVarNames "float m_flDepth"
        // static metadata: MNetworkVarNames "uint32 m_nRenderOrder"
        // static metadata: MNetworkVarNames "bool m_bProjectOnWorld"
        // static metadata: MNetworkVarNames "bool m_bProjectOnCharacters"
        // static metadata: MNetworkVarNames "bool m_bProjectOnWater"
        // static metadata: MNetworkVarNames "float m_flDepthSortBias"
        #pragma pack(push, 1)
        class C_EnvDecal : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // m_hDecalMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hDecalMaterial;
            char m_hDecalMaterial[0x8]; // 0x970            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDecalDimensionsChanged"
            float m_flWidth; // 0x978            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDecalDimensionsChanged"
            float m_flHeight; // 0x97c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDecalDimensionsChanged"
            float m_flDepth; // 0x980            
            // metadata: MNetworkEnable
            std::uint32_t m_nRenderOrder; // 0x984            
            // metadata: MNetworkEnable
            bool m_bProjectOnWorld; // 0x988            
            // metadata: MNetworkEnable
            bool m_bProjectOnCharacters; // 0x989            
            // metadata: MNetworkEnable
            bool m_bProjectOnWater; // 0x98a            
            uint8_t _pad098b[0x1]; // 0x98b
            // metadata: MNetworkEnable
            float m_flDepthSortBias; // 0x98c            
            uint8_t _pad0990[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvDecal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvDecal) == 0x9a8);
    };
};
