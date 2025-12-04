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
        #pragma pack(push, 1)
        class sPendingTreeModelChange
        {
        public:
            std::int32_t nTeam; // 0x_            
            std::int32_t nIndex; // 0x_            
            CUtlString strModel; // 0x_            
            std::int32_t nChangeToken; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::sPendingTreeModelChange, nTeam) == 0x_);
        static_assert(offsetof(source2sdk::server::sPendingTreeModelChange, nIndex) == 0x_);
        static_assert(offsetof(source2sdk::server::sPendingTreeModelChange, strModel) == 0x_);
        static_assert(offsetof(source2sdk::server::sPendingTreeModelChange, nChangeToken) == 0x_);
        
        static_assert(sizeof(source2sdk::server::sPendingTreeModelChange) == 0x_);
    };
};
