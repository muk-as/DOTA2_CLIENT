#pragma once
#include "source2sdk/server/CBaseClientUIEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x940
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hActivator"
    #pragma pack(push, 1)
    class CPointClientUIDialog : public server::CBaseClientUIEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDialogActivatorChanged"
        // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hActivator;
        char m_hActivator[0x4]; // 0x938        
        bool m_bStartEnabled; // 0x93c        
        [[maybe_unused]] std::uint8_t pad_0x93d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointClientUIDialog because it is not a standard-layout class
    static_assert(sizeof(CPointClientUIDialog) == 0x940);
};
