#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CLightComponent;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7b0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "CLightComponent::Storage_t m_CLightComponent"
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CLightEntity : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CLightComponent"
            // metadata: MNetworkAlias "CLightComponent"
            // metadata: MNetworkTypeAlias "CLightComponent"
            source2sdk::server::CLightComponent* m_CLightComponent; // 0x7a8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLightEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLightEntity) == 0x7b0);
    };
};
