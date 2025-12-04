#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseClientUIEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // static metadata: MNetworkVarNames "EHANDLE m_hActivator"
        #pragma pack(push, 1)
        class C_PointClientUIDialog : public source2sdk::client::C_BaseClientUIEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDialogActivatorChanged"
            // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hActivator;
            char m_hActivator[0x_]; // 0x_            
            bool m_bStartEnabled; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIDialog because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIDialog) == 0x_);
    };
};
