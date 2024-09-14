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
    class CFuncPlat;
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
    #pragma pack(push, 1)
    class CPlatTrigger : public server::CBaseModelEntity
    {
    public:
        // m_pPlatform has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CFuncPlat> m_pPlatform;
        char m_pPlatform[0x4]; // 0x788        
        [[maybe_unused]] std::uint8_t pad_0x78c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPlatTrigger because it is not a standard-layout class
    static_assert(sizeof(CPlatTrigger) == 0x790);
};
