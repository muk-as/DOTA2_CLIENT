#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CLightComponent;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x7e0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CLightComponent::Storage_t m_CLightComponent"
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_LightEntity : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CLightComponent"
        // metadata: MNetworkAlias "CLightComponent"
        // metadata: MNetworkTypeAlias "CLightComponent"
        client::CLightComponent* m_CLightComponent; // 0x7d8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_LightEntity because it is not a standard-layout class
    static_assert(sizeof(C_LightEntity) == 0x7e0);
};
