#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CLightComponent;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7d8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "CLightComponent::Storage_t m_CLightComponent"
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_LightEntity : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CLightComponent"
            // metadata: MNetworkAlias "CLightComponent"
            // metadata: MNetworkTypeAlias "CLightComponent"
            source2sdk::client::CLightComponent* m_CLightComponent; // 0x7d0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_LightEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_LightEntity) == 0x7d8);
    };
};
