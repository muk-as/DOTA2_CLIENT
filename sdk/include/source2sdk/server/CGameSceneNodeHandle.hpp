#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // static metadata: MNetworkVarNames "CEntityHandle m_hOwner"
        // static metadata: MNetworkVarNames "CUtlStringToken m_name"
        #pragma pack(push, 1)
        class CGameSceneNodeHandle
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            CEntityHandle m_hOwner; // 0x_            
            // metadata: MNetworkEnable
            CUtlStringToken m_name; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CGameSceneNodeHandle, m_hOwner) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNodeHandle, m_name) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CGameSceneNodeHandle) == 0x_);
    };
};
