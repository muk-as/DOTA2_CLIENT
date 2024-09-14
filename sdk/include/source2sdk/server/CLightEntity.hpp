#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CLightComponent;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x790
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CLightComponent::Storage_t m_CLightComponent"
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class CLightEntity : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CLightComponent"
        // metadata: MNetworkAlias "CLightComponent"
        // metadata: MNetworkTypeAlias "CLightComponent"
        server::CLightComponent* m_CLightComponent; // 0x788        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLightEntity because it is not a standard-layout class
    static_assert(sizeof(CLightEntity) == 0x790);
};
