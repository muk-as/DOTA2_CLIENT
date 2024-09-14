#pragma once
#include "source2sdk/client/C_BaseClientUIEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x810
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hActivator"
    #pragma pack(push, 1)
    class C_PointClientUIDialog : public client::C_BaseClientUIEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDialogActivatorChanged"
        // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hActivator;
        char m_hActivator[0x4]; // 0x808        
        bool m_bStartEnabled; // 0x80c        
        [[maybe_unused]] std::uint8_t pad_0x80d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointClientUIDialog because it is not a standard-layout class
    static_assert(sizeof(C_PointClientUIDialog) == 0x810);
};
