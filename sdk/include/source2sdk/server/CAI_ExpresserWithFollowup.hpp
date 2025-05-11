#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_Expresser.hpp"
namespace source2sdk
{
    namespace client
    {
        struct ResponseFollowup;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x88
        // Has VTable
        #pragma pack(push, 1)
        class CAI_ExpresserWithFollowup : public source2sdk::server::CAI_Expresser
        {
        public:
            source2sdk::client::ResponseFollowup* m_pPostponedFollowup; // 0x78            
            uint8_t _pad0080[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_ExpresserWithFollowup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_ExpresserWithFollowup) == 0x88);
    };
};
