#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_SoundEventEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "Vector m_vMins"
        // static metadata: MNetworkVarNames "Vector m_vMaxs"
        #pragma pack(push, 1)
        class C_SoundEventAABBEntity : public source2sdk::client::C_SoundEventEntity
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vMins; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vMaxs; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SoundEventAABBEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SoundEventAABBEntity) == 0x_);
    };
};
