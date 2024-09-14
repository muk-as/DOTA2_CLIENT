#pragma once
#include "source2sdk/server/CAI_ExpresserWithFollowup.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x90
    // Has VTable
    #pragma pack(push, 1)
    class CMultiplayer_Expresser : public server::CAI_ExpresserWithFollowup
    {
    public:
        bool m_bAllowMultipleScenes; // 0x88        
        [[maybe_unused]] std::uint8_t pad_0x89[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMultiplayer_Expresser because it is not a standard-layout class
    static_assert(sizeof(CMultiplayer_Expresser) == 0x90);
};
