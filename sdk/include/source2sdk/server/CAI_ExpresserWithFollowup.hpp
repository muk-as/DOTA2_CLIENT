#pragma once
#include "source2sdk/server/CAI_Expresser.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class ResponseFollowup;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x88
    // Has VTable
    #pragma pack(push, 1)
    class CAI_ExpresserWithFollowup : public server::CAI_Expresser
    {
    public:
        client::ResponseFollowup* m_pPostponedFollowup; // 0x78        
        [[maybe_unused]] std::uint8_t pad_0x80[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_ExpresserWithFollowup because it is not a standard-layout class
    static_assert(sizeof(CAI_ExpresserWithFollowup) == 0x88);
};
