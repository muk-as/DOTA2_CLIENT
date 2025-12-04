#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/fogparams_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MNetworkVarNames "int16 scale"
        // static metadata: MNetworkVarNames "Vector origin"
        // static metadata: MNetworkVarNames "bool bClip3DSkyBoxNearToWorldFar"
        // static metadata: MNetworkVarNames "float32 flClip3DSkyBoxNearToWorldFarOffset"
        // static metadata: MNetworkVarNames "fogparams_t fog"
        // static metadata: MNetworkVarNames "WorldGroupId_t m_nWorldGroupID"
        #pragma pack(push, 1)
        struct sky3dparams_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int16_t scale; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector origin; // 0x_            
            // metadata: MNetworkEnable
            bool bClip3DSkyBoxNearToWorldFar; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float flClip3DSkyBoxNearToWorldFarOffset; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::server::fogparams_t fog; // 0x_            
            // metadata: MNetworkEnable
            WorldGroupId_t m_nWorldGroupID; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::sky3dparams_t, scale) == 0x_);
        static_assert(offsetof(source2sdk::server::sky3dparams_t, origin) == 0x_);
        static_assert(offsetof(source2sdk::server::sky3dparams_t, bClip3DSkyBoxNearToWorldFar) == 0x_);
        static_assert(offsetof(source2sdk::server::sky3dparams_t, flClip3DSkyBoxNearToWorldFarOffset) == 0x_);
        static_assert(offsetof(source2sdk::server::sky3dparams_t, fog) == 0x_);
        static_assert(offsetof(source2sdk::server::sky3dparams_t, m_nWorldGroupID) == 0x_);
        
        static_assert(sizeof(source2sdk::server::sky3dparams_t) == 0x_);
    };
};
